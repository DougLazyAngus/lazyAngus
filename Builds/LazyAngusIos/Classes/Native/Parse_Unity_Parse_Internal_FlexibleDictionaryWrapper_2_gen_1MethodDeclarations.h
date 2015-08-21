#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t1850;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1397;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46385_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46385(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46385_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46387_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46387(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46387_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46389_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46389(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46389_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46391_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46391(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46391_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46393_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46393(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46393_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46395_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46395(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46395_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46397_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46397(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46397_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46399_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46399(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46399_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46401_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46401(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46401_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46403_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46403(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46403_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46405_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46405(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46405_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46407_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46407(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46407_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46409_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2U5BU5D_t1410* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46409(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46411_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46411(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46411_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46413_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46413(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46413_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46415_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46415(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46415_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46417_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46417(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46417_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46419_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46419(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46419_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46421_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46421(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46421_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t775  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46423_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46423(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t775  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46423_gshared)(__this /* static, unused */, ___pair, method)
