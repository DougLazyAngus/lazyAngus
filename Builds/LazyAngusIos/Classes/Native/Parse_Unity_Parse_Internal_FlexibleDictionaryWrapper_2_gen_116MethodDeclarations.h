#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>
struct FlexibleDictionaryWrapper_2_t1988;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9844;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8340;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7838;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57385_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57385(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57385_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57386_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57386(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57386_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57387_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57387(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57387_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57388_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57388(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57388_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57389_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57389(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57389_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57390_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57390(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57390_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57391_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57391(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57391_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57392_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57392(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57392_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57393_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57393(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57393_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57394_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57394(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57394_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57395_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57395(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57395_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57396_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57396(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57396_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57397_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2U5BU5D_t8340* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57397(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2U5BU5D_t8340*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57397_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57398_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57398(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57398_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57399_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57399(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57399_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57400_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57400(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57400_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57401_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57401(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57401_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57402_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57402(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57402_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57403_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57403(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57403_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7833  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57404_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57404(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7833  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57404_gshared)(__this /* static, unused */, ___pair, method)
