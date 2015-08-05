#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t1955;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53753_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53753(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53753_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53754_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53754(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53754_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53755_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53755(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53755_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53756_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53756(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53756_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53757_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53757(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53757_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53758_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53758(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53758_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53759_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53759(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53759_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53760_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53760(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53760_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53761_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53761(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53761_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53762_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53762(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53763_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53763(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53763_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53764_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53764(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53764_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53765_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53765(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53766_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53766(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53766_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53767_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53767(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53767_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53768_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53768(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53768_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53769_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53769(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53769_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53770_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53770(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53770_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53771_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53771(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53771_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53772_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53772(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53772_gshared)(__this /* static, unused */, ___pair, method)
