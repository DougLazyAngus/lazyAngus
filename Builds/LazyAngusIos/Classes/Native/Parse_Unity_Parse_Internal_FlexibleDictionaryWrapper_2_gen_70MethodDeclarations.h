#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1871;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7432;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7150;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49355_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49355(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49355_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49356_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49356(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49356_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49357_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49357(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49357_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49358_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49358(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49358_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49359_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49359(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49359_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49360_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49360(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49360_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49361_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49361(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49361_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49362_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49362(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49362_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49363_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49363(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49363_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49364_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49364(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49364_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49365_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49365(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49365_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49366_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49366(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49366_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49367_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2U5BU5D_t7432* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49367(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2U5BU5D_t7432*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49368_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49368(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49368_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49369_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49369(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49369_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49370_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49370(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49370_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49371_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49371(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49371_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49372_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49372(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49372_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49373_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49373(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49373_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7145  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49374_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5498  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49374(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7145  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49374_gshared)(__this /* static, unused */, ___pair, method)
