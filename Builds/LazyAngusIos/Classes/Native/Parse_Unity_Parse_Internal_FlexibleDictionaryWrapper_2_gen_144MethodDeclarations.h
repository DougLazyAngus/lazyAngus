#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>
struct FlexibleDictionaryWrapper_2_t2012;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7842;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58749_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58749(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58749_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58751_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58751(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58751_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58753_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58753(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58753_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58755_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58755(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58755_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58757_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58757(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58757_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58759_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58759(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58759_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58761_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58761(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58761_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58763_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58763(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58763_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58765_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58765(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58765_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58767_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58767(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58767_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58769_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58769(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58769_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58771_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58771(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58771_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58773_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2U5BU5D_t8412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58773(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2U5BU5D_t8412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58773_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58775_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58775(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58775_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58777_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58777(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58777_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58779_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58779(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58779_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58781_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58781(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58781_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58783_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58783(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58783_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58785_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58785(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58785_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7646  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58787_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58787(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7646  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58787_gshared)(__this /* static, unused */, ___pair, method)
