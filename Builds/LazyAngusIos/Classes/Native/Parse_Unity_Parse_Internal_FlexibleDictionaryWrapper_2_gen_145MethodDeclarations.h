#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t2017;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58840_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58840(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58840_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58841_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58841(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58841_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58842_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58842(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58842_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58843_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58843(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58843_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58844_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58844(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58844_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58845_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58845(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58845_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58846_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58846(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58846_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58847_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58847(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58847_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58848_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58848(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58848_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58849_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58849(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58849_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58850_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58850(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58850_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58851_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58851(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58851_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58852_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58852(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58852_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58853_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58853(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58853_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58854_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58854(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58854_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58855_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58855(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58855_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58856_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58856(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58856_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58857_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58857(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58857_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58858_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58858(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58858_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58859_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7771  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58859(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58859_gshared)(__this /* static, unused */, ___pair, method)
