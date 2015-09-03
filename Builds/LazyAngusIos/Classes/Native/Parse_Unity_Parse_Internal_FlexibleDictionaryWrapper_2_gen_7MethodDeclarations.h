#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>
struct FlexibleDictionaryWrapper_2_t1875;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7812;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1416;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51371_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51371(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51371_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51372_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51372(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51372_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51373_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51373(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51373_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51374_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51374(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51374_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51375_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51375(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51375_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51376_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51376(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51376_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51377_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51377(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51377_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51378_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51378(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51378_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51379_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51379(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51379_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51380_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51380(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51380_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51381_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51381(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51381_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51382_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51382(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51382_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51383_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2U5BU5D_t1429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51383(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2U5BU5D_t1429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51383_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51384_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51384(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51384_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51385_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51385(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51385_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51386_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51386(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51386_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51387_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51387(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51387_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51388_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51388(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51388_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51389_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51389(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51389_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t791  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51390_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7816  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51390(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t791  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51390_gshared)(__this /* static, unused */, ___pair, method)
