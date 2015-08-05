#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>
struct FlexibleDictionaryWrapper_2_t1827;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7226;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7118;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46226_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46226(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46226_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46228_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46228(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46228_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46230_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46230(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46230_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46232_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46232(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46232_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46234_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46234(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46234_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46236_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46236(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46236_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46238_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46238(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46238_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46240_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46240(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46240_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46242_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46242(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46242_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46244_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46244(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46244_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46246_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46246(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46246_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46248_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46248(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46248_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46250_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2U5BU5D_t7226* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46250(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2U5BU5D_t7226*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46250_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46252_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46252(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46252_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46254_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46254(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46254_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46256_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46256(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46256_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46258_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46258(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46258_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46260_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46260(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46260_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46262_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46262(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46262_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7113  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46264_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t730  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46264(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7113  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46264_gshared)(__this /* static, unused */, ___pair, method)
