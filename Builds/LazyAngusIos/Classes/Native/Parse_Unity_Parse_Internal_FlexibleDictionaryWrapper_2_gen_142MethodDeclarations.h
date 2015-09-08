#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>
struct FlexibleDictionaryWrapper_2_t2011;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9841;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t837;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7843;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58462_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58462(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58462_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58463_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58463(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58463_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58464_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58464(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58464_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58465_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58465(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58465_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58466_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58466(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58466_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58467_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58467(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58467_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58468_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58468(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58468_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58469_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58469(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58469_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58470_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58470(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58470_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58471_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58471(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58471_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58472_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58472(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58472_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58473_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58473(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58473_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58474_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58474(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58474_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58475_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58475(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58475_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58476_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58476(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58476_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58477_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58477(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58477_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58478_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58478(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58478_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58479_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58479(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58479_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58480_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58480(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58480_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7647  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58481_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t792  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58481(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7647  (*) (Object_t * /* static, unused */, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58481_gshared)(__this /* static, unused */, ___pair, method)
