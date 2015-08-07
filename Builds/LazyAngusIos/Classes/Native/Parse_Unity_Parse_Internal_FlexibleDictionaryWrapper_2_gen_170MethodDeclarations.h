#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>
struct FlexibleDictionaryWrapper_2_t1970;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t6944;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1361;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1348;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54652_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54652(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54652_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54653_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54653(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54653_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54654_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54654(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54654_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54655_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54655(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54655_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54656_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54656(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54656_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54657_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54657(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54657_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54658_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54658(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54658_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m54659_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54659(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54659_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54660_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54660(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54660_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54661_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54661(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54661_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54662_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54662(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54662_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54663_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54663(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54663_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54664_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2U5BU5D_t1361* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54664(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2U5BU5D_t1361*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54664_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54665_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54665(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54665_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54666_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54666(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54666_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54667_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54667(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54667_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54668_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54668(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54668_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54669_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54669(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54669_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54670_gshared (Object_t * __this /* static, unused */, DateTime_t287  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54670(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54670_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54671_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7029  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54671(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7029 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54671_gshared)(__this /* static, unused */, ___pair, method)
