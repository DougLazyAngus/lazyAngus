#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1897;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9208;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7237;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7380;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7206;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48642_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48642(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48642_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48643_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48643(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48643_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48644_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48644(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48644_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48645_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48645(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48645_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48646_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48646(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48646_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48647_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48647(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48647_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48648_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48648(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48648_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48649_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48649(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48649_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48650_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48650(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48650_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48651_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48651(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48651_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48652_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48652(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48652_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48653_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48653(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48653_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48654_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2U5BU5D_t7380* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48654(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48654_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48655_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48655(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48655_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48656_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48656(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48656_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48657_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48657(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48657_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48658_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48658(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48658_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48659_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48659(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48659_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48660_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48660(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48660_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7201  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48661_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7241  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48661(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7201  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48661_gshared)(__this /* static, unused */, ___pair, method)
