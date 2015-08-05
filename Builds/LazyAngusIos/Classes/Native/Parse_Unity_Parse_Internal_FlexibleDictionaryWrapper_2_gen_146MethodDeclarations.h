#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>
struct FlexibleDictionaryWrapper_2_t1948;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53471_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53471(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53471_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53472_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53472(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53472_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53473_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53473(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53473_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53474_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53474(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53474_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53475_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53475(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53475_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53476_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53476(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53476_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53477_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53477(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53477_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53478_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53478(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53478_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53479_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53479(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53479_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53480_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53480(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53480_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53481_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53481(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53481_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53482_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53482(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53482_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53483_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53483(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53483_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53484_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53484(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53484_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53485_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53485(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53485_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53486_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53486(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53486_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53487_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53487(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53487_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53488_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53488(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53488_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53489_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53489(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53489_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53490_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53490(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53490_gshared)(__this /* static, unused */, ___pair, method)
