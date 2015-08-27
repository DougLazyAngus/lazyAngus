#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1858;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7237;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46716_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46716(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46716_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46717_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46717(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46717_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46718_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46718(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46718_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46719_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46719(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46719_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46720_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46720(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46720_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46721_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46721(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46721_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46722_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46722(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46722_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46723_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46723(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46723_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46724_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46724(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46724_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46725_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46725(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46725_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46726_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46726(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46726_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46727_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46727(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46727_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46728_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2U5BU5D_t1413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46728(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46728_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46729_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46729(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46729_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46730_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46730(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46730_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46731_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46731(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46731_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46732_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46732(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46732_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46733_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46733(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46733_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46734_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46734(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46734_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46735_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7241  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46735(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46735_gshared)(__this /* static, unused */, ___pair, method)
