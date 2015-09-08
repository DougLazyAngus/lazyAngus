#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t2014;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9841;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7762;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7843;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58828_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58828(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58828_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58829_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58829(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58829_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58830_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58830(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58830_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58831_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58831(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58831_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58832_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58832(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58832_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58833_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58833(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58833_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58834_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58834(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58834_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58835_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58835(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58835_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58836_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58836(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58836_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58837_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58837(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58837_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58838_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58838(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58838_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58839_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58839(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58839_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58840_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58840(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58840_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58841_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58841(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58841_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58842_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58842(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58842_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58843_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58843(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58843_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58844_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58844(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58844_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58845_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58845(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58845_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58846_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58846(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58846_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7647  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58847_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7766  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58847(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7647  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7766 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58847_gshared)(__this /* static, unused */, ___pair, method)
