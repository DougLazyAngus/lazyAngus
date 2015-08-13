#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1920;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9199;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7212;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7503;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7221;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49989_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49989(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1920 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49989_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49990_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49990(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1920 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49990_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49991_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49991(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1920 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49991_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49992_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49992(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49992_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49993_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49993(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1920 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49993_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49994_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49994(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1920 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49994_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49995_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49995(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49995_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49996_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49996(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1920 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49996_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49997_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49997(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1920 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49997_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49998_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49998(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1920 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49998_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49999_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49999(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49999_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50000_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50000(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1920 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50000_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50001_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, KeyValuePair_2U5BU5D_t7503* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50001(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1920 *, KeyValuePair_2U5BU5D_t7503*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50001_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50002_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50002(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50002_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50003_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50003(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50003_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50004_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50004(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1920 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50004_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50005_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50005(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50005_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50006_gshared (FlexibleDictionaryWrapper_2_t1920 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50006(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1920 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50006_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50007_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50007(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50007_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7216  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50008_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7216  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50008(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7216  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50008_gshared)(__this /* static, unused */, ___pair, method)
