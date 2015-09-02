#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1926;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9246;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7266;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7474;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49751_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49751(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49751_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49752_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49752(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49752_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49753_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49753(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49753_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49754_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49754(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49754_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49755_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49755(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49755_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49756_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49756(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49756_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49757_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49757(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49757_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49758_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49758(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49758_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49759_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49759(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49759_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49760_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49760(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49760_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49761_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49761(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49761_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49762_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49762(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49763_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2U5BU5D_t7474* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49763(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49763_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49764_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49764(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49764_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49765_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49765(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49765_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49766_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49766(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49766_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49767_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49767(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49767_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49768_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49768(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49768_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49769_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49769(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49769_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49770_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7270  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49770(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49770_gshared)(__this /* static, unused */, ___pair, method)
