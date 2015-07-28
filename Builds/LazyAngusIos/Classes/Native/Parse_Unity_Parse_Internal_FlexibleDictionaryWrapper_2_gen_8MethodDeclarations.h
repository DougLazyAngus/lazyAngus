#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1800;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45970_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45970(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45970_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45971_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45971(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45971_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45972_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45972_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45973_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45973(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45973_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45974_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45974(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45974_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45975_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45975(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45975_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45976_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45976(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45976_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45977_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45977(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45977_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45978_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45978(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45978_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45979_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45979(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45979_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45980_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45980(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45980_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45981_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45981(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45981_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45982_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45982(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45982_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45983_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45983(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45983_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45984_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45984(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45984_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45985_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45985(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45985_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45986_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45986(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45986_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45987_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45987(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45987_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45988_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45988(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45988_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45989_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45989(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45989_gshared)(__this /* static, unused */, ___pair, method)
