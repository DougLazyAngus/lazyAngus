#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>
struct FlexibleDictionaryWrapper_2_t1879;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7818;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1420;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51396_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51396(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51396_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51397_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51397(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51397_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51398_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51398(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51398_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51399_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51399(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51399_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51400_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51400(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51400_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51401_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51401(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51401_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51402_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51402(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51402_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51403_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51403(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51403_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51404_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51404(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51404_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51405_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51405(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51405_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51406_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51406(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51406_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51407_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51407(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51407_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51408_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2U5BU5D_t1433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51408(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51408_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51409_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51409(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51409_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51410_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51410(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51410_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51411_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51411(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51411_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51412_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51412(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51412_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51413_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51413(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51413_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51414_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51414(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51414_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t795  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51415_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7822  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51415(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t795  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51415_gshared)(__this /* static, unused */, ___pair, method)
