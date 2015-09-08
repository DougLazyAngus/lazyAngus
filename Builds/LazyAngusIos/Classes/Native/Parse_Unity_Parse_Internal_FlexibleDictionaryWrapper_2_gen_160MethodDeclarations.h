#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2032;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7789;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59703_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59703(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59703_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59704_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59704(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59704_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59705_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59705(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59705_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59706_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59706(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59706_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59707_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59707(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59707_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59708_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59708(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59708_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59709_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59709(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59709_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59710_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59710(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59710_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59711_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59711(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59711_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59712_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59712(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59712_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59713_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59713(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59713_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59714_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59714(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59714_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59715_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59715(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59715_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59716_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59716(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59716_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59717_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59717(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59717_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59718_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59718(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59718_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59719_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59719(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59719_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59720_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59720(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59720_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59721_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59721(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59721_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59722_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7793  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59722(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59722_gshared)(__this /* static, unused */, ___pair, method)
