#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>
struct FlexibleDictionaryWrapper_2_t1926;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7572;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7232;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50402_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50402(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50402_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50403_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50403(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50403_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50404_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50404(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50404_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50405_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50405(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50405_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50406_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50406(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50406_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50407_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50407(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50407_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50408_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50408(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50408_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50409_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50409(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50409_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50410_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50410(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50410_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50411_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50411(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50411_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50412_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50412(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50412_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50413_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50413(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50413_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50414_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2U5BU5D_t7572* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50414(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2U5BU5D_t7572*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50414_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50415_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50415(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50415_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50416_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50416(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50416_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50417_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50417(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50417_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50418_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50418(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50418_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50419_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50419(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50419_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50420_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50420(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50420_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5541  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50421_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t775  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50421(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5541  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50421_gshared)(__this /* static, unused */, ___pair, method)
