#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2028;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9555;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7783;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7849;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59678_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59678(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59678_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59679_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59679(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59679_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59680_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59680(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59680_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59681_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59681(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59681_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59682_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59682(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59682_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59683_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59683(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59683_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59684_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59684(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59684_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59685_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59685(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59685_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59686_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59686(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59686_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59687_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59687(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59687_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59688_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59688(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59689_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59689(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59689_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59690_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2U5BU5D_t8477* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59690(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2U5BU5D_t8477*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59690_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59691_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59691(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59691_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59692_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59692(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59692_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59693_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59693(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59693_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59694_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59694(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59694_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59695_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59695(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59695_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59696_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59696(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59696_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7626  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59697_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7787  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59697(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7626  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59697_gshared)(__this /* static, unused */, ___pair, method)
