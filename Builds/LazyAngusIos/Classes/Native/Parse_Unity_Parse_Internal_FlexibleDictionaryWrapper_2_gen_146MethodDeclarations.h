#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>
struct FlexibleDictionaryWrapper_2_t2018;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7778;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58883_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58883(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58883_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58884_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58884(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58884_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58885_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58885(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58885_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58886_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58886(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58886_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58887_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58887(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58887_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58888_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58888(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58888_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58889_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58889(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58889_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58890_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58890(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58890_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58891_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58891(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58891_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58892_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58892(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58892_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58893_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58893(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58893_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58894_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58894(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58894_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58895_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58895(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58895_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58896_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58896(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58896_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58897_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58897(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58897_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58898_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58898(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58898_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58899_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58899(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58899_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58900_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58900(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58900_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58901_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58901(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58901_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58902_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7782  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58902(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58902_gshared)(__this /* static, unused */, ___pair, method)
