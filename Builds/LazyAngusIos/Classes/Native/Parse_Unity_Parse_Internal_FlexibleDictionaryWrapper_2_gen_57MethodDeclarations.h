#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1925;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9246;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7031;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7474;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49708_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49708(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49708_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49709_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49709(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49709_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49710_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49710(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49710_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49711_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49711(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49711_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49712_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49712(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49712_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49713_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49713(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49713_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49714_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49714(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49714_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49715_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49715(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49715_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49716_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49716(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49716_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49717_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49717(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49717_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49718_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49718(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49718_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49719_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49719(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49719_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49720_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2U5BU5D_t7474* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49720(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49720_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49721_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49721(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49721_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49722_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49722(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49722_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49723_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49723(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49723_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49724_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49724(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49724_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49725_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49725(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49725_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49726_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49726(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49726_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49727_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5560  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49727(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5560 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49727_gshared)(__this /* static, unused */, ___pair, method)
