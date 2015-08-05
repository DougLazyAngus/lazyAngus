#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>
struct FlexibleDictionaryWrapper_2_t1879;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7498;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49645_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49645(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49645_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49646_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49646(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49646_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49647_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49647(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49647_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49648_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49648(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49648_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49649_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49649(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49649_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49650_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49650(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49650_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49651_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49651(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49651_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m49652_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49652(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49652_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49653_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49653(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49653_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49654_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49654(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49654_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49655_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49655(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49655_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49656_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49656(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49656_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49657_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2U5BU5D_t7498* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49657(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49657_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49658_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49658(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49659_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49659(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49659_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49660_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49660(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49660_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49661_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49661(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49661_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49662_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49662(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49662_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49663_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49663(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49663_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5499  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49664_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t730  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49664(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5499  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49664_gshared)(__this /* static, unused */, ___pair, method)
