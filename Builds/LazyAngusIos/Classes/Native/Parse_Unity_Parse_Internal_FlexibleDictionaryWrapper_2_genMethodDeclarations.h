#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
struct FlexibleDictionaryWrapper_2_t1851;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m31519_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m31519(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m31519_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m31520_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m31520(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31520_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m31521_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m31521(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m31521_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m31522_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m31522(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m31522_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m31523_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m31523(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31523_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m31524_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m31524(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m31524_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m31525_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m31525(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m31525_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m31526_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m31526(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m31526_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m31527_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m31527(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31527_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m31528_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m31528(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31528_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m31529_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m31529(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m31529_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m31530_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m31530(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m31530_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m31531_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2U5BU5D_t1413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m31531(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m31531_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m31532_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m31532(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m31532_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m31533_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m31533(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m31533_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m31534_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m31534(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31534_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m31535_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m31535(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m31535_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31536_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31536(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31536_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31537_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31537(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31537_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31538_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31538(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31538_gshared)(__this /* static, unused */, ___pair, method)
