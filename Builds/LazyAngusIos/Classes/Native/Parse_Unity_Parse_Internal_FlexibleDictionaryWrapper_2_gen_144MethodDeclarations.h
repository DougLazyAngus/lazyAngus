#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>
struct FlexibleDictionaryWrapper_2_t2013;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9841;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7753;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7843;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58762_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58762(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58762_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58764_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58764(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58764_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58766_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58766(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58766_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58768_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58768(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58768_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58770_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58770(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58770_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58772_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58772(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58772_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58774_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58774(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58774_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58776_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58776(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58776_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58778_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58778(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58778_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58780_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58780(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58780_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58782_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58782(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58782_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58784_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58784(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58784_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58786_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58786(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58786_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58788_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58788(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58788_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58790_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58790(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58790_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58792_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58792(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58792_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58794_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58794(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58794_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58796_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58796(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58796_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58798_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58798(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58798_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7647  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58800_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7755  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58800(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7647  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7755 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58800_gshared)(__this /* static, unused */, ___pair, method)
