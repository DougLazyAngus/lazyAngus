#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t1882;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7582;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1420;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51548_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51548(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51548_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51549_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51549(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51549_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51550_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51550(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51550_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51551_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51551(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51551_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51552_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51552(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51552_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51553_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51553(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51553_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51554_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51554(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51554_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51555_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51555(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51555_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51556_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51556(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51556_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51557_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51557(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51557_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51558_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51558(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51558_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51559_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51559(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51559_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51560_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2U5BU5D_t1433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51560(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51560_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51561_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51561(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51561_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51562_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51562(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51562_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51563_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51563(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51563_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51564_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51564(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51564_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51565_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51565(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51565_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51566_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51566(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51566_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t795  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51567_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7652  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51567(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t795  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51567_gshared)(__this /* static, unused */, ___pair, method)
