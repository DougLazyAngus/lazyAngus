#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>
struct FlexibleDictionaryWrapper_2_t1795;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45683_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45683(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45683_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45684_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45684(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45684_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45685_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45685(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45685_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45686_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45686(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45686_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45687_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45687(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45687_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45688_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45688(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45688_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45689_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45689(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45689_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45690_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45690(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45690_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45691_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45691(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45691_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45692_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45692(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45692_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45693_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45693(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45693_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45694_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45694(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45694_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45695_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45695(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45695_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45696_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45696(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45696_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45697_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45697(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45697_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45698_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45698(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45698_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45699_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45699(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45699_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45700_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45700(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45700_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45701_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45701(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45701_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45702_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45702(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45702_gshared)(__this /* static, unused */, ___pair, method)
