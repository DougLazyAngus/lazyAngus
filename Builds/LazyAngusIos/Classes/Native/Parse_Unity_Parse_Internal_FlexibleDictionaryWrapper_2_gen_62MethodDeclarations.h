#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>
struct FlexibleDictionaryWrapper_2_t1913;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49451_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49451(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49451_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49452_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49452(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49452_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49453_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49453(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49453_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49454_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49454(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49454_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49455_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49455(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49455_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49456_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49456(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49456_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49457_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49457(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49457_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49458_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49458(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49458_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49459_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49459(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49459_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49460_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49460(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49460_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49461_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49461(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49461_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49462_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49462(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49462_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49463_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49463(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49463_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49464_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49464(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49464_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49465_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49465(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49465_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49466_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49466(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49466_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49467_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49467(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49467_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49468_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49468(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49468_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49469_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49469(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49469_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49470_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7075  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49470(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49470_gshared)(__this /* static, unused */, ___pair, method)
