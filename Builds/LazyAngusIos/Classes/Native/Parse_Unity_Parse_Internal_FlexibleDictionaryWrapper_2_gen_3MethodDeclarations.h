#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>
struct FlexibleDictionaryWrapper_2_t1854;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1399;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46430_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46430(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46430_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46431_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46431(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46431_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46432_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46432(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46432_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46433_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46433(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46433_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46434_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46434(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46434_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46435_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46435(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46435_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46436_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46436(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46436_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46437_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46437(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46437_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46438_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46438(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46438_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46439_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46439(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46439_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46440_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46440(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46440_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46441_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46441(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46441_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46442_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2U5BU5D_t1412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46442(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2U5BU5D_t1412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46442_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46443_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46443(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46443_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46444_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46444(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46444_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46445_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46445(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46445_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46446_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46446(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46446_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46447_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46447(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46447_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46448_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46448(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46448_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46449_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46449(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46449_gshared)(__this /* static, unused */, ___pair, method)
