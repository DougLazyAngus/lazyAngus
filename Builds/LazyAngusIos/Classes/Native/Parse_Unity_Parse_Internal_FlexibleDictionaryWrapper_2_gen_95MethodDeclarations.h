#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1944;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9209;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7637;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7243;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51632_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51632(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51632_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51633_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51633(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51633_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51634_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51634(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51634_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51635_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51635(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51636_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51636(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51636_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51637_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51637(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51637_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51638_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51638(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51638_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51639_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51639(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51639_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51640_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51640(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51640_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51641_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51641(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51641_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51642_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51642(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51642_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51643_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51643(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51643_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51644_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2U5BU5D_t7637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51644(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2U5BU5D_t7637*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51644_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51645_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51645(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51645_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51646_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51646(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51647_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51647(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51647_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51648_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51648(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51648_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51649_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51649(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51649_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51650_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51650(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51650_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7238  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51651_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7220  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51651(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7238  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51651_gshared)(__this /* static, unused */, ___pair, method)
