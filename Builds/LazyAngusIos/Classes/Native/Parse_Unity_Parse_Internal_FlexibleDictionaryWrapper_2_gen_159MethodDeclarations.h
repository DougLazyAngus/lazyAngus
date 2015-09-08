#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>
struct FlexibleDictionaryWrapper_2_t2031;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7778;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59660_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59660(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59660_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59661_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59661(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59661_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59662_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59662(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59662_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59663_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59663(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59663_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59664_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59664(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59664_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59665_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59665(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59665_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59666_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59666(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59666_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59667_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59667(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59667_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59668_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59668(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59668_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59669_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59669(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59669_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59670_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59670(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59670_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59671_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59671(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59671_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59672_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59672(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59672_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59673_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59673(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59673_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59674_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59674(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59674_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59675_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59675(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59675_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59676_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59676(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59676_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59677_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59677(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59677_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59678_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59678(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59678_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59679_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7782  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59679(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59679_gshared)(__this /* static, unused */, ___pair, method)
