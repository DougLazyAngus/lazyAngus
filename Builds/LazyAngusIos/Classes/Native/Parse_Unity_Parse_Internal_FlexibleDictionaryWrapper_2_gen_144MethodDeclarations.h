#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>
struct FlexibleDictionaryWrapper_2_t1946;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7111;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53365_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53365(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53365_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53367_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53367(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53367_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53369_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53369(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53369_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53371_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53371(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53371_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53373_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53373(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53373_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53375_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53375(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53375_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53377_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53377(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53377_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53379_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53379(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53379_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53381_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53381(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53381_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53383_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53383(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53383_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53385_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53385(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53385_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53387_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53387(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53387_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53389_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53389(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53391_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53391(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53391_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53393_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53393(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53393_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53395_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53395(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53395_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53397_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53397(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53397_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53399_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53399(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53399_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53401_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53401(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53401_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53403_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53403(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53403_gshared)(__this /* static, unused */, ___pair, method)
