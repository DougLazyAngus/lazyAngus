#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1974;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9849;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7796;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8217;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7823;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56340_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56340(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56340_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56341_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56341(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56341_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56342_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56342(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56342_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56343_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56343(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56343_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56344_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56344(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56344_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56345_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56345(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56345_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56346_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56346(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56346_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56347_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56347(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56347_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56348_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56348(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56348_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56349_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56349(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56349_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56350_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56350(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56350_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56351_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56351(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56351_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56352_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2U5BU5D_t8217* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56352(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56352_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56353_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56353(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56353_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56354_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56354(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56354_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56355_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56355(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56355_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56356_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56356(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56356_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56357_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56357(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56357_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56358_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56358(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56358_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7818  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56359_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7800  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56359(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7818  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56359_gshared)(__this /* static, unused */, ___pair, method)
