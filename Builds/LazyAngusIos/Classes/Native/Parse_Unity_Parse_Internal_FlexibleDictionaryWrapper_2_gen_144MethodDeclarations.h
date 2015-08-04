#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>
struct FlexibleDictionaryWrapper_2_t1944;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7769;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53350_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53350(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53350_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53352_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53352(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53352_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53354_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53354(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53354_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53356_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53356(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53356_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53358_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53358(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53358_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53360_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53360(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53360_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53362_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53362(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53362_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53364_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53364(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53364_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53366_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53366(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53366_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53368_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53368(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53368_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53370_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53370(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53370_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53372_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53372(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53372_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53374_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2U5BU5D_t7769* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53374(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2U5BU5D_t7769*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53374_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53376_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53376(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53376_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53378_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53378(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53378_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53380_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53380(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53380_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53382_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53382(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53382_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53384_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53384(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53384_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53386_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53386(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53386_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7003  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53388_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7111  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53388(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7003  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53388_gshared)(__this /* static, unused */, ___pair, method)
