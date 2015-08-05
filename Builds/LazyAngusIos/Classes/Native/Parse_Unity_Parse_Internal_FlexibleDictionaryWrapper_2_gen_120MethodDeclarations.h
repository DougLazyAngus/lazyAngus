#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>
struct FlexibleDictionaryWrapper_2_t1922;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7693;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7191;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52385_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52385(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52385_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52386_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52386(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52386_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52387_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52387(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52387_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52388_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52388(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52388_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52389_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52389(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52389_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52390_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52390(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52390_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52391_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52391(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52391_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52392_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52392(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52392_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52393_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52393(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52393_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52394_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52394(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52394_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52395_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52395(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52395_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52396_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52396(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52396_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52397_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2U5BU5D_t7693* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52397(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2U5BU5D_t7693*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52397_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52398_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52398(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52398_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52399_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52399(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52399_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52400_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52400(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52400_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52401_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52401(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52401_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52402_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52402(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52402_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52403_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52403(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52403_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7186  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52404_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52404(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7186  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52404_gshared)(__this /* static, unused */, ___pair, method)
