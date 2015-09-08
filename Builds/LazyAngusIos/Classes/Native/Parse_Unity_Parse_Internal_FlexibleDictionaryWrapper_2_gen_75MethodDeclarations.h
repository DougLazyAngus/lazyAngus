#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>
struct FlexibleDictionaryWrapper_2_t1947;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7582;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8080;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7798;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54968_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54968(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54968_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54969_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54969(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54969_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54970_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54970(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54970_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54971_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54971(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54971_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54972_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54972_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54973_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54973(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54973_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54974_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54974(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54974_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54975_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54975(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54975_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54976_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54976(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54976_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54977_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54977(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54977_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54978_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54978(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54978_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54979_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54979(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54979_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54980_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2U5BU5D_t8080* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54980(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2U5BU5D_t8080*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54980_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54981_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54981(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54981_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54982_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54982(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54982_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54983_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54983(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54983_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54984_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54984(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54984_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54985_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54985(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54985_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54986_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54986(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54986_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7793  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54987_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7652  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54987(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7793  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54987_gshared)(__this /* static, unused */, ___pair, method)
