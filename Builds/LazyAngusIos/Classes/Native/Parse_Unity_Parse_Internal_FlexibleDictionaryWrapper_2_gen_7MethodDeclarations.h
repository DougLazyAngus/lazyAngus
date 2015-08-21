#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>
struct FlexibleDictionaryWrapper_2_t1856;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7245;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1397;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46744_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46744(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46744_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46745_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46745(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46745_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46746_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46746(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46746_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46747_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46747(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46747_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46748_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46748(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46748_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46749_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46749(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46749_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46750_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46750(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46750_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46751_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46751(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46751_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46752_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46752(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46752_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46753_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46753(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46753_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46754_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46754(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46754_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46755_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46755(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46755_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46756_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2U5BU5D_t1410* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46756(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46756_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46757_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46757(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46757_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46758_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46758(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46758_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46759_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46759(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46759_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46760_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46760(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46760_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46761_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46761(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46761_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46762_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46762(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46762_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t775  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46763_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7249  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46763(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t775  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46763_gshared)(__this /* static, unused */, ___pair, method)
