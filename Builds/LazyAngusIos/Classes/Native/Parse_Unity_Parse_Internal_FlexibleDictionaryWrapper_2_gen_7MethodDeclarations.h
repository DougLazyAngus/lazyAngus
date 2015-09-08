#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>
struct FlexibleDictionaryWrapper_2_t1876;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7813;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1430;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1417;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51384_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51384(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51384_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51385_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51385(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51385_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51386_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51386(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51386_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51387_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51387(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51387_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51388_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51388(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51388_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51389_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51389(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51389_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51390_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51390(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51390_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51391_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51391(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51391_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51392_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51392(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51392_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51393_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51393(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51393_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51394_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51394(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51394_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51395_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51395(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51395_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51396_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2U5BU5D_t1430* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51396(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2U5BU5D_t1430*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51396_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51397_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51397(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51397_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51398_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51398(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51398_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51399_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51399(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51399_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51400_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51400(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51400_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51401_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51401(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51401_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51402_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51402(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51402_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t792  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51403_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7817  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51403(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t792  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51403_gshared)(__this /* static, unused */, ___pair, method)
