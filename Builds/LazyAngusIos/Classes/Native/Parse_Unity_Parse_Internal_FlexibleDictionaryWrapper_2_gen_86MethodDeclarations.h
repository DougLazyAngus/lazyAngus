#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1965;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7812;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55735_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55735(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55735_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55736_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55736(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55736_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55737_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55737(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55737_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55738_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55738(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55738_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55739_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55739(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55739_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55740_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55740(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55740_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55741_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55741(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55741_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55742_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55742(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55742_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55743_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55743(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55743_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55744_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55744(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55744_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55745_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55745(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55745_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55746_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55746(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55746_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55747_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2U5BU5D_t8152* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55747(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2U5BU5D_t8152*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55747_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55748_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55748(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55748_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55749_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55749(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55749_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55750_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55750(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55750_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55751_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55751(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55751_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55752_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55752(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55752_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55753_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55753(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55753_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6104  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55754_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7840  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55754(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6104  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55754_gshared)(__this /* static, unused */, ___pair, method)
