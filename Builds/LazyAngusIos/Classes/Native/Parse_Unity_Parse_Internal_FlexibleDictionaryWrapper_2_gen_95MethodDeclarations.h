#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1893;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7138;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7559;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7165;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50843_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50843(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50843_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50844_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50844(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50844_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50845_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50845(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50845_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50846_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50846(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50846_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50847_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50847(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50847_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50848_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50848(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50848_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50849_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50849(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50849_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50850_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50850(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50850_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50851_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50851(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50851_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50852_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50852(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50852_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50853_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50853(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50853_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50854_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50854(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50854_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50855_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2U5BU5D_t7559* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50855(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2U5BU5D_t7559*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50855_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50856_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50856(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50856_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50857_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50857(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50857_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50858_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50858(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50858_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50859_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50859(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50859_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50860_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50860(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50860_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50861_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50861(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50861_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7160  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50862_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7142  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50862(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7160  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50862_gshared)(__this /* static, unused */, ___pair, method)
