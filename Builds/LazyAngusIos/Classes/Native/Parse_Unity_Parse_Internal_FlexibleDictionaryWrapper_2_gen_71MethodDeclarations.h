#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1871;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7158;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7431;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7149;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49391_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49391(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49391_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49392_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49392(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49392_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49393_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49393(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49393_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49394_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49394(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49394_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49395_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49395(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49395_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49396_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49396(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49396_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49397_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49397(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49397_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49398_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49398(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49398_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49399_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49399(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49399_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49400_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7144  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49400(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49400_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49401_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49401(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49401_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49402_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7144  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49402(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49402_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49403_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2U5BU5D_t7431* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49403(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2U5BU5D_t7431*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49403_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49404_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49404(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49404_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49405_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49405(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49405_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49406_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7144  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49406(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49406_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49407_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49407(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49407_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49408_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49408(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49408_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49409_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49409(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49409_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7144  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49410_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7162  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49410(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7144  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49410_gshared)(__this /* static, unused */, ___pair, method)
