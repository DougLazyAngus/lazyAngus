#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1850;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9098;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7149;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7357;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48551_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48551(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48551_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48552_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48552(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48552_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48553_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48553(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48553_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48554_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48554(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48554_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48555_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48555(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48555_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48556_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48556(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48556_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48557_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48557(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48557_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48558_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48558(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48558_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48559_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48559(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48559_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48560_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48560(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48560_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48561_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48561(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48561_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48562_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48562(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48562_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48563_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2U5BU5D_t7357* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48563(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48563_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48564_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48564(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48564_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48565_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48565(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48565_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48566_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48566(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48566_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48567_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48567(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48567_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48568_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48568(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48568_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48569_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48569(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48569_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48570_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7153  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48570(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48570_gshared)(__this /* static, unused */, ___pair, method)
