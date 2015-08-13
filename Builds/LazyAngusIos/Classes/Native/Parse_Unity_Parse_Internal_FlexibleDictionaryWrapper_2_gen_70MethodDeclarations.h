#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1921;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9199;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6995;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7503;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7221;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50032_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50032(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50032_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50033_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50033(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50033_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50034_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50034(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50034_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50035_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50035(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50035_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50036_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50036(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50036_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50037_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50037(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50037_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50038_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50038(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50038_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m50039_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50039(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50039_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50040_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50040(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50040_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50041_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50041(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50041_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50042_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50042(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50042_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50043_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50043(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50043_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50044_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2U5BU5D_t7503* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50044(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2U5BU5D_t7503*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50044_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50045_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50045(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50045_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50046_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50046(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50046_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50047_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50047(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50047_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50048_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50048(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50048_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50049_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50049(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50049_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50050_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50050(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50050_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7216  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50051_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5543  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50051(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7216  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50051_gshared)(__this /* static, unused */, ___pair, method)
